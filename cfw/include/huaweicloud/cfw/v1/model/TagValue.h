
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_TagValue_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_TagValue_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  TagValue
    : public ModelBase
{
public:
    TagValue();
    virtual ~TagValue();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TagValue members

    /// <summary>
    /// tag键
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// tag值
    /// </summary>

    std::vector<std::string>& getValue();
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::vector<std::string>& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::vector<std::string> value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_TagValue_H_
