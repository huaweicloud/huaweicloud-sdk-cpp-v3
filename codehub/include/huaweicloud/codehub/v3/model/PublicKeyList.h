
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_PublicKeyList_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_PublicKeyList_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v3/model/PublicKey.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  PublicKeyList
    : public ModelBase
{
public:
    PublicKeyList();
    virtual ~PublicKeyList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PublicKeyList members

    /// <summary>
    /// 密钥列表
    /// </summary>

    std::vector<PublicKey>& getSshkey();
    bool sshkeyIsSet() const;
    void unsetsshkey();
    void setSshkey(const std::vector<PublicKey>& value);

    /// <summary>
    /// 密钥总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<PublicKey> sshkey_;
    bool sshkeyIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_PublicKeyList_H_
