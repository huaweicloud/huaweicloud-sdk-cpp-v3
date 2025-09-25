
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ShowReviewSettingRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ShowReviewSettingRequest_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  ShowReviewSettingRequest
    : public ModelBase
{
public:
    ShowReviewSettingRequest();
    virtual ~ShowReviewSettingRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowReviewSettingRequest members

    /// <summary>
    /// 仓库短id
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowReviewSettingRequest& dereference_from_shared_ptr(std::shared_ptr<ShowReviewSettingRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ShowReviewSettingRequest_H_
