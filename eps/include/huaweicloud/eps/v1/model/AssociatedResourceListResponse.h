
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_AssociatedResourceListResponse_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_AssociatedResourceListResponse_H_


#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  AssociatedResourceListResponse
    : public ModelBase
{
public:
    AssociatedResourceListResponse();
    virtual ~AssociatedResourceListResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociatedResourceListResponse members

    /// <summary>
    /// 资源ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 资源名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// eip信息
    /// </summary>

    std::string getEip() const;
    bool eipIsSet() const;
    void unseteip();
    void setEip(const std::string& value);

    /// <summary>
    /// 资源类型
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string eip_;
    bool eipIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_AssociatedResourceListResponse_H_
