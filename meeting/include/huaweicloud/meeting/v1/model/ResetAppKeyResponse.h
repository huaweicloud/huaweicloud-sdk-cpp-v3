
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ResetAppKeyResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ResetAppKeyResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ResetAppKeyResponse
    : public ModelBase, public HttpResponse
{
public:
    ResetAppKeyResponse();
    virtual ~ResetAppKeyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResetAppKeyResponse members

    /// <summary>
    /// 企业应用名称
    /// </summary>

    std::string getAppName() const;
    bool appNameIsSet() const;
    void unsetappName();
    void setAppName(const std::string& value);

    /// <summary>
    /// 企业应用ID
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 企业应用appkey
    /// </summary>

    std::string getAppKey() const;
    bool appKeyIsSet() const;
    void unsetappKey();
    void setAppKey(const std::string& value);

    /// <summary>
    /// 企业应用描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 企业应用创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 最近修改时间
    /// </summary>

    std::string getLastUpdateTime() const;
    bool lastUpdateTimeIsSet() const;
    void unsetlastUpdateTime();
    void setLastUpdateTime(const std::string& value);

    /// <summary>
    /// 企业应用状态  * 0：正常  * 1：停用 
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);


protected:
    std::string appName_;
    bool appNameIsSet_;
    std::string appId_;
    bool appIdIsSet_;
    std::string appKey_;
    bool appKeyIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string lastUpdateTime_;
    bool lastUpdateTimeIsSet_;
    int32_t status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ResetAppKeyResponse_H_
