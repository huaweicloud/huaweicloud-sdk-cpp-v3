
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_ShowAssociatedResourcesResponse_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_ShowAssociatedResourcesResponse_H_


#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/eps/v1/model/AssociatedResourceListResponse.h>
#include <huaweicloud/eps/v1/model/ResourceErrorListResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  ShowAssociatedResourcesResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAssociatedResourcesResponse();
    virtual ~ShowAssociatedResourcesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAssociatedResourcesResponse members

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
    /// 关联的资源类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 关联资源列表
    /// </summary>

    std::vector<AssociatedResourceListResponse>& getAssociatedResources();
    bool associatedResourcesIsSet() const;
    void unsetassociatedResources();
    void setAssociatedResources(const std::vector<AssociatedResourceListResponse>& value);

    /// <summary>
    /// 错误信息列表
    /// </summary>

    std::vector<ResourceErrorListResponse>& getErrors();
    bool errorsIsSet() const;
    void unseterrors();
    void setErrors(const std::vector<ResourceErrorListResponse>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::vector<AssociatedResourceListResponse> associatedResources_;
    bool associatedResourcesIsSet_;
    std::vector<ResourceErrorListResponse> errors_;
    bool errorsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_ShowAssociatedResourcesResponse_H_
