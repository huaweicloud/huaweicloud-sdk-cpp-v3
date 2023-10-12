
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ResourceTag_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ResourceTag_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 标签信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ResourceTag
    : public ModelBase
{
public:
    ResourceTag();
    virtual ~ResourceTag();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceTag members

    /// <summary>
    /// 标签键。 约束：最大长度36，只能包含字母、数字、下划线、中划线和中文。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 标签值。 约束：最大长度43，只能包含字母、数字、下划线、中划线和中文。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ResourceTag_H_
