
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListUserGpgKeysRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListUserGpgKeysRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListUserGpgKeysRequest
    : public ModelBase
{
public:
    ListUserGpgKeysRequest();
    virtual ~ListUserGpgKeysRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListUserGpgKeysRequest members

    /// <summary>
    /// **参数解释：** key的标题名称。 **取值范围：** 字符串长度不少于1，不超过2000。
    /// </summary>

    std::string getQuery() const;
    bool queryIsSet() const;
    void unsetquery();
    void setQuery(const std::string& value);


protected:
    std::string query_;
    bool queryIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListUserGpgKeysRequest& dereference_from_shared_ptr(std::shared_ptr<ListUserGpgKeysRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListUserGpgKeysRequest_H_
