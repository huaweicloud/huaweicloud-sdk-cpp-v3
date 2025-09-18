
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowProjectInfoV4Response_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowProjectInfoV4Response_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/GetProjectInfoV4Result_project.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowProjectInfoV4Response
    : public ModelBase, public HttpResponse
{
public:
    ShowProjectInfoV4Response();
    virtual ~ShowProjectInfoV4Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProjectInfoV4Response members

    /// <summary>
    /// 
    /// </summary>

    GetProjectInfoV4Result_project getProject() const;
    bool projectIsSet() const;
    void unsetproject();
    void setProject(const GetProjectInfoV4Result_project& value);


protected:
    GetProjectInfoV4Result_project project_;
    bool projectIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowProjectInfoV4Response_H_
