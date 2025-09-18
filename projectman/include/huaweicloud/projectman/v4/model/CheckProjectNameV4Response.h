
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CheckProjectNameV4Response_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CheckProjectNameV4Response_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CheckProjectNameV4Response
    : public ModelBase, public HttpResponse
{
public:
    CheckProjectNameV4Response();
    virtual ~CheckProjectNameV4Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckProjectNameV4Response members

    /// <summary>
    /// 是否存在相同的项目名称 true 存在， false 不存在
    /// </summary>

    bool isExist() const;
    bool existIsSet() const;
    void unsetexist();
    void setExist(bool value);


protected:
    bool exist_;
    bool existIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CheckProjectNameV4Response_H_
