
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchTagActionDelRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchTagActionDelRequestBody_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/TagDelWithKeyValue.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  BatchTagActionDelRequestBody
    : public ModelBase
{
public:
    BatchTagActionDelRequestBody();
    virtual ~BatchTagActionDelRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchTagActionDelRequestBody members

    /// <summary>
    /// 操作标识（区分大小写）：删除时为“delete”。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 标签列表。单个实例总标签数上限20个。
    /// </summary>

    std::vector<TagDelWithKeyValue>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagDelWithKeyValue>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::vector<TagDelWithKeyValue> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchTagActionDelRequestBody_H_
