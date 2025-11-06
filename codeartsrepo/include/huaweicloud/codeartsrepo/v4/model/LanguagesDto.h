
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_LanguagesDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_LanguagesDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  LanguagesDto
    : public ModelBase
{
public:
    LanguagesDto();
    virtual ~LanguagesDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LanguagesDto members

    /// <summary>
    /// **参数解释：** 颜色。
    /// </summary>

    std::string getColor() const;
    bool colorIsSet() const;
    void unsetcolor();
    void setColor(const std::string& value);

    /// <summary>
    /// **参数解释：** 语言类型。
    /// </summary>

    std::string getLabel() const;
    bool labelIsSet() const;
    void unsetlabel();
    void setLabel(const std::string& value);

    /// <summary>
    /// **参数解释：** 比重。
    /// </summary>

    double getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(double value);


protected:
    std::string color_;
    bool colorIsSet_;
    std::string label_;
    bool labelIsSet_;
    double value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_LanguagesDto_H_
