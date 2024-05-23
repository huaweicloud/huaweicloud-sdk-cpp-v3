
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchResourceShareAssociationsResponse_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchResourceShareAssociationsResponse_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ram/v1/model/PageInfo.h>
#include <huaweicloud/ram/v1/model/ResourceShareAssociation.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  SearchResourceShareAssociationsResponse
    : public ModelBase, public HttpResponse
{
public:
    SearchResourceShareAssociationsResponse();
    virtual ~SearchResourceShareAssociationsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchResourceShareAssociationsResponse members

    /// <summary>
    /// 绑定的详细信息列表。
    /// </summary>

    std::vector<ResourceShareAssociation>& getResourceShareAssociations();
    bool resourceShareAssociationsIsSet() const;
    void unsetresourceShareAssociations();
    void setResourceShareAssociations(const std::vector<ResourceShareAssociation>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfo getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfo& value);


protected:
    std::vector<ResourceShareAssociation> resourceShareAssociations_;
    bool resourceShareAssociationsIsSet_;
    PageInfo pageInfo_;
    bool pageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchResourceShareAssociationsResponse_H_
