
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateObjectRetrievalRequestBody_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateObjectRetrievalRequestBody_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/ObsInfo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// obs桶取回请求消息
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  CreateObjectRetrievalRequestBody
    : public ModelBase
{
public:
    CreateObjectRetrievalRequestBody();
    virtual ~CreateObjectRetrievalRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateObjectRetrievalRequestBody members

    /// <summary>
    /// 
    /// </summary>

    ObsInfo getObsInfo() const;
    bool obsInfoIsSet() const;
    void unsetobsInfo();
    void setObsInfo(const ObsInfo& value);

    /// <summary>
    /// 临时恢复时间，临时恢复会产生一个标准存储副本，副本的存在时间。单位：天，默认1天。 
    /// </summary>

    int32_t getDays() const;
    bool daysIsSet() const;
    void unsetdays();
    void setDays(int32_t value);

    /// <summary>
    /// 回调地址，为空则不回调
    /// </summary>

    std::string getCallbackUrl() const;
    bool callbackUrlIsSet() const;
    void unsetcallbackUrl();
    void setCallbackUrl(const std::string& value);

    /// <summary>
    /// 自定义上下文，回调时会回调给用户，透传信息
    /// </summary>

    std::string getSessionContext() const;
    bool sessionContextIsSet() const;
    void unsetsessionContext();
    void setSessionContext(const std::string& value);


protected:
    ObsInfo obsInfo_;
    bool obsInfoIsSet_;
    int32_t days_;
    bool daysIsSet_;
    std::string callbackUrl_;
    bool callbackUrlIsSet_;
    std::string sessionContext_;
    bool sessionContextIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateObjectRetrievalRequestBody_H_
