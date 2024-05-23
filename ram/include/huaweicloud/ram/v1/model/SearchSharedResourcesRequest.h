
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchSharedResourcesRequest_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchSharedResourcesRequest_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ram/v1/model/SearchSharedResourcesReqBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  SearchSharedResourcesRequest
    : public ModelBase
{
public:
    SearchSharedResourcesRequest();
    virtual ~SearchSharedResourcesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchSharedResourcesRequest members

    /// <summary>
    /// 
    /// </summary>

    SearchSharedResourcesReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const SearchSharedResourcesReqBody& value);


protected:
    SearchSharedResourcesReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SearchSharedResourcesRequest& dereference_from_shared_ptr(std::shared_ptr<SearchSharedResourcesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchSharedResourcesRequest_H_
