
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_TagList_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_TagList_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v3/model/Tag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  TagList
    : public ModelBase
{
public:
    TagList();
    virtual ~TagList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TagList members

    /// <summary>
    /// 指定仓库的标签列表
    /// </summary>

    std::vector<Tag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tag>& value);

    /// <summary>
    /// 指定仓库的标签总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<Tag> tags_;
    bool tagsIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_TagList_H_
