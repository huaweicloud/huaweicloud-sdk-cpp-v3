
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceUpdateImageRequestBody_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceUpdateImageRequestBody_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 原生更新接口请求体
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  GlanceUpdateImageRequestBody
    : public ModelBase
{
public:
    GlanceUpdateImageRequestBody();
    virtual ~GlanceUpdateImageRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GlanceUpdateImageRequestBody members

    /// <summary>
    /// 所需进行的更新操作的类型：替换、添加、删除。取值范围：replace、add、remove
    /// </summary>

    std::string getOp() const;
    bool opIsSet() const;
    void unsetop();
    void setOp(const std::string& value);

    /// <summary>
    /// 所要操作的属性名称。 replace和remove操作取值只能是镜像当前已有的属性、add操作取值只能是镜像当前不存在的属性，需要在属性名称前加”/”
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// 所需更新/添加属性的值
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string op_;
    bool opIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceUpdateImageRequestBody_H_
