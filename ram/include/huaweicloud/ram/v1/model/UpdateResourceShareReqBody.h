
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_UpdateResourceShareReqBody_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_UpdateResourceShareReqBody_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// The request body of the UpdateResourceShare operation.
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  UpdateResourceShareReqBody
    : public ModelBase
{
public:
    UpdateResourceShareReqBody();
    virtual ~UpdateResourceShareReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateResourceShareReqBody members

    /// <summary>
    /// 资源共享实例的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 资源共享实例的描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 资源共享实例是否支持共享给组织外账号。
    /// </summary>

    bool isAllowExternalPrincipals() const;
    bool allowExternalPrincipalsIsSet() const;
    void unsetallowExternalPrincipals();
    void setAllowExternalPrincipals(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    bool allowExternalPrincipals_;
    bool allowExternalPrincipalsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_UpdateResourceShareReqBody_H_
