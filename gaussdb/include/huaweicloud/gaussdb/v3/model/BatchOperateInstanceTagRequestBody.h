
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchOperateInstanceTagRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchOperateInstanceTagRequestBody_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/TagItem.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  BatchOperateInstanceTagRequestBody
    : public ModelBase
{
public:
    BatchOperateInstanceTagRequestBody();
    virtual ~BatchOperateInstanceTagRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchOperateInstanceTagRequestBody members

    /// <summary>
    /// 操作标识，取值： - create，表示添加标签。 - delete，表示删除标签。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 标签列表。
    /// </summary>

    std::vector<TagItem>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagItem>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::vector<TagItem> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchOperateInstanceTagRequestBody_H_
