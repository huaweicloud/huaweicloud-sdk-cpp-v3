
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddFeatureRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddFeatureRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/AddTestItemInfo.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AddFeatureRequest
    : public ModelBase
{
public:
    AddFeatureRequest();
    virtual ~AddFeatureRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddFeatureRequest members

    /// <summary>
    /// 
    /// </summary>

    AddTestItemInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AddTestItemInfo& value);


protected:
    AddTestItemInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddFeatureRequest& dereference_from_shared_ptr(std::shared_ptr<AddFeatureRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddFeatureRequest_H_
