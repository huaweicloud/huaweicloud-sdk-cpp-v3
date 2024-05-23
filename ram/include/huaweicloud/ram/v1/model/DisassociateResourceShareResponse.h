
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_DisassociateResourceShareResponse_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_DisassociateResourceShareResponse_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_RAM_V1_EXPORT  DisassociateResourceShareResponse
    : public ModelBase, public HttpResponse
{
public:
    DisassociateResourceShareResponse();
    virtual ~DisassociateResourceShareResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisassociateResourceShareResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<ResourceShareAssociation>& getResourceShareAssociations();
    bool resourceShareAssociationsIsSet() const;
    void unsetresourceShareAssociations();
    void setResourceShareAssociations(const std::vector<ResourceShareAssociation>& value);


protected:
    std::vector<ResourceShareAssociation> resourceShareAssociations_;
    bool resourceShareAssociationsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_DisassociateResourceShareResponse_H_
