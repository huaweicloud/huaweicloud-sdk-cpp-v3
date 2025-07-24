
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SaveTaskSettingRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SaveTaskSettingRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/SaveTaskSettingRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  SaveTaskSettingRequest
    : public ModelBase
{
public:
    SaveTaskSettingRequest();
    virtual ~SaveTaskSettingRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SaveTaskSettingRequest members

    /// <summary>
    /// 服务id
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SaveTaskSettingRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const SaveTaskSettingRequestBody& value);


protected:
    std::string serviceId_;
    bool serviceIdIsSet_;
    SaveTaskSettingRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SaveTaskSettingRequest& dereference_from_shared_ptr(std::shared_ptr<SaveTaskSettingRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SaveTaskSettingRequest_H_
