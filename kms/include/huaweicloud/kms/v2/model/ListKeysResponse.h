
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ListKeysResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ListKeysResponse_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/KeyDetails.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ListKeysResponse
    : public ModelBase, public HttpResponse
{
public:
    ListKeysResponse();
    virtual ~ListKeysResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListKeysResponse members

    /// <summary>
    /// key_id列表。
    /// </summary>

    std::vector<std::string>& getKeys();
    bool keysIsSet() const;
    void unsetkeys();
    void setKeys(const std::vector<std::string>& value);

    /// <summary>
    /// 密钥详情列表。详情参见KeyDetails
    /// </summary>

    std::vector<KeyDetails>& getKeyDetails();
    bool keyDetailsIsSet() const;
    void unsetkeyDetails();
    void setKeyDetails(const std::vector<KeyDetails>& value);

    /// <summary>
    /// 获取下一页所需要传递的“marker”值。当“truncated”为“false”时，“next_marker”为空。
    /// </summary>

    std::string getNextMarker() const;
    bool nextMarkerIsSet() const;
    void unsetnextMarker();
    void setNextMarker(const std::string& value);

    /// <summary>
    /// 是否还有下一页： - “true”表示还有数据。 - “false”表示已经是最后一页。
    /// </summary>

    std::string getTruncated() const;
    bool truncatedIsSet() const;
    void unsettruncated();
    void setTruncated(const std::string& value);

    /// <summary>
    /// 密钥总条数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<std::string> keys_;
    bool keysIsSet_;
    std::vector<KeyDetails> keyDetails_;
    bool keyDetailsIsSet_;
    std::string nextMarker_;
    bool nextMarkerIsSet_;
    std::string truncated_;
    bool truncatedIsSet_;
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

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ListKeysResponse_H_
