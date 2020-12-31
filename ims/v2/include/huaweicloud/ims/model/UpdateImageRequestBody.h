
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_UpdateImageRequestBody_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_UpdateImageRequestBody_H_

#include <huaweicloud/ims/ImsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 扩展更新镜像接口请求体
/// </summary>
class HUAWEICLOUD_IMS_EXPORT  UpdateImageRequestBody
    : public ModelBase
{
public:
    UpdateImageRequestBody();
    virtual ~UpdateImageRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateImageRequestBody members

    /// <summary>
    /// 操作类型，目前取值为add，replace和remove。
    /// </summary>

    std::string getOp() const;
    bool opIsSet() const;
    void unsetop();
    void setOp(const std::string& value);

    /// <summary>
    /// 需要更新的属性名称，需要在属性名称前加“/”。
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// 需要更新属性的值。
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

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_UpdateImageRequestBody_H_
