
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CodelineDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CodelineDto_H_


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
/// 仓库近15日每日代码提交行数增减信息
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  CodelineDto
    : public ModelBase
{
public:
    CodelineDto();
    virtual ~CodelineDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CodelineDto members

    /// <summary>
    /// **参数解释：** 增加行数。 **取值范围：** 最小0 **默认取值：** 0
    /// </summary>

    int32_t getAdditions() const;
    bool additionsIsSet() const;
    void unsetadditions();
    void setAdditions(int32_t value);

    /// <summary>
    /// **参数解释：** 删除行数。 **取值范围：** 最小0 **默认取值：** 0
    /// </summary>

    int32_t getDeletions() const;
    bool deletionsIsSet() const;
    void unsetdeletions();
    void setDeletions(int32_t value);

    /// <summary>
    /// **参数解释：** 日期，格式&#39;yyyyMMdd&#39;,举例：20251030。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getDate() const;
    bool dateIsSet() const;
    void unsetdate();
    void setDate(const std::string& value);


protected:
    int32_t additions_;
    bool additionsIsSet_;
    int32_t deletions_;
    bool deletionsIsSet_;
    std::string date_;
    bool dateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CodelineDto_H_
