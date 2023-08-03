
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchTagActionAddRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchTagActionAddRequestBody_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/TagWithKeyValue.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  BatchTagActionAddRequestBody
    : public ModelBase
{
public:
    BatchTagActionAddRequestBody();
    virtual ~BatchTagActionAddRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchTagActionAddRequestBody members

    /// <summary>
    /// 操作标识（区分大小写）：创建时为“create”。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 标签列表。单个实例总标签数上限20个。
    /// </summary>

    std::vector<TagWithKeyValue>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagWithKeyValue>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::vector<TagWithKeyValue> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchTagActionAddRequestBody_H_
