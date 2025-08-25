
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_CreateClusterRequest_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_CreateClusterRequest_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/CreateClusterRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  CreateClusterRequest
    : public ModelBase
{
public:
    CreateClusterRequest();
    virtual ~CreateClusterRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateClusterRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateClusterRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateClusterRequestBody& value);


protected:
    CreateClusterRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateClusterRequest& dereference_from_shared_ptr(std::shared_ptr<CreateClusterRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_CreateClusterRequest_H_
