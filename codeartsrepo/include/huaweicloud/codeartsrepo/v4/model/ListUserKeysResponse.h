
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListUserKeysResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListUserKeysResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/SSHKeyDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListUserKeysResponse
    : public ModelBase, public HttpResponse
{
public:
    ListUserKeysResponse();
    virtual ~ListUserKeysResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListUserKeysResponse members

    /// <summary>
    /// **参数解释：** 密钥列表。 **取值范围：** 列表长度不少于0，不超过1000。
    /// </summary>

    std::vector<SSHKeyDto>& getKeys();
    bool keysIsSet() const;
    void unsetkeys();
    void setKeys(const std::vector<SSHKeyDto>& value);

    /// <summary>
    /// **参数解释：** 结果条数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<SSHKeyDto> keys_;
    bool keysIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListUserKeysResponse_H_
