
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyOttChannelInfoRecordSettingsResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyOttChannelInfoRecordSettingsResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ModifyOttChannelInfoRecordSettingsResponse
    : public ModelBase, public HttpResponse
{
public:
    ModifyOttChannelInfoRecordSettingsResponse();
    virtual ~ModifyOttChannelInfoRecordSettingsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyOttChannelInfoRecordSettingsResponse members

    /// <summary>
    /// 错误码
    /// </summary>

    std::string getResultCode() const;
    bool resultCodeIsSet() const;
    void unsetresultCode();
    void setResultCode(const std::string& value);

    /// <summary>
    /// 错误描述
    /// </summary>

    std::string getResultMsg() const;
    bool resultMsgIsSet() const;
    void unsetresultMsg();
    void setResultMsg(const std::string& value);

    /// <summary>
    /// 推流域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 组名或应用名，为必填项
    /// </summary>

    std::string getAppName() const;
    bool appNameIsSet() const;
    void unsetappName();
    void setAppName(const std::string& value);

    /// <summary>
    /// 频道ID。频道唯一标识，为必填项
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string resultCode_;
    bool resultCodeIsSet_;
    std::string resultMsg_;
    bool resultMsgIsSet_;
    std::string domain_;
    bool domainIsSet_;
    std::string appName_;
    bool appNameIsSet_;
    std::string id_;
    bool idIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyOttChannelInfoRecordSettingsResponse_H_
