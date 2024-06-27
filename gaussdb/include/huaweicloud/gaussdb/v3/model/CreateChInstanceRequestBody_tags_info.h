
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateChInstanceRequestBody_tags_info_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateChInstanceRequestBody_tags_info_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/CreateChInstanceRequestBody_tags_info_sys_tags.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 标签值。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CreateChInstanceRequestBody_tags_info
    : public ModelBase
{
public:
    CreateChInstanceRequestBody_tags_info();
    virtual ~CreateChInstanceRequestBody_tags_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateChInstanceRequestBody_tags_info members

    /// <summary>
    /// 系统标签。
    /// </summary>

    std::vector<CreateChInstanceRequestBody_tags_info_sys_tags>& getSysTags();
    bool sysTagsIsSet() const;
    void unsetsysTags();
    void setSysTags(const std::vector<CreateChInstanceRequestBody_tags_info_sys_tags>& value);


protected:
    std::vector<CreateChInstanceRequestBody_tags_info_sys_tags> sysTags_;
    bool sysTagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateChInstanceRequestBody_tags_info_H_
