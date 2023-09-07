
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchDealResourceTagReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchDealResourceTagReq_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v5/model/BatchResourceTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量添加或删除资源标签请求体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  BatchDealResourceTagReq
    : public ModelBase
{
public:
    BatchDealResourceTagReq();
    virtual ~BatchDealResourceTagReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchDealResourceTagReq members

    /// <summary>
    /// 操作标识（区分大小写）： - 创建时为“create” - 删除时为“delete”
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 标签列表。最多添加10个标签。
    /// </summary>

    std::vector<BatchResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<BatchResourceTag>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::vector<BatchResourceTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchDealResourceTagReq_H_
