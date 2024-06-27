
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateChInstanceInfo_tags_info_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateChInstanceInfo_tags_info_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/gaussdb/v3/model/CreateChInstanceInfo_tags_info_tags.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例标签。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CreateChInstanceInfo_tags_info
    : public ModelBase
{
public:
    CreateChInstanceInfo_tags_info();
    virtual ~CreateChInstanceInfo_tags_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateChInstanceInfo_tags_info members

    /// <summary>
    /// 用户标签。
    /// </summary>

    std::vector<CreateChInstanceInfo_tags_info_tags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<CreateChInstanceInfo_tags_info_tags>& value);

    /// <summary>
    /// 系统标签。
    /// </summary>

    std::vector<CreateChInstanceInfo_tags_info_tags>& getSysTags();
    bool sysTagsIsSet() const;
    void unsetsysTags();
    void setSysTags(const std::vector<CreateChInstanceInfo_tags_info_tags>& value);


protected:
    std::vector<CreateChInstanceInfo_tags_info_tags> tags_;
    bool tagsIsSet_;
    std::vector<CreateChInstanceInfo_tags_info_tags> sysTags_;
    bool sysTagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateChInstanceInfo_tags_info_H_
