
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_ResourceShareAssociationReqBody_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_ResourceShareAssociationReqBody_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// The request body of AssociateResourceShare and DisassociateResourceShare operations.
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  ResourceShareAssociationReqBody
    : public ModelBase
{
public:
    ResourceShareAssociationReqBody();
    virtual ~ResourceShareAssociationReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceShareAssociationReqBody members

    /// <summary>
    /// 指定与资源共享实例关联的一个或多个资源使用者的列表。
    /// </summary>

    std::vector<std::string>& getPrincipals();
    bool principalsIsSet() const;
    void unsetprincipals();
    void setPrincipals(const std::vector<std::string>& value);

    /// <summary>
    /// 指定与资源共享实例关联的一个或多个共享资源URN的列表。
    /// </summary>

    std::vector<std::string>& getResourceUrns();
    bool resourceUrnsIsSet() const;
    void unsetresourceUrns();
    void setResourceUrns(const std::vector<std::string>& value);


protected:
    std::vector<std::string> principals_;
    bool principalsIsSet_;
    std::vector<std::string> resourceUrns_;
    bool resourceUrnsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_ResourceShareAssociationReqBody_H_
