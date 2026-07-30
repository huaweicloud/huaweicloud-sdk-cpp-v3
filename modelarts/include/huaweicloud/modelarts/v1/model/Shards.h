
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Shards_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Shards_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Shards
    : public ModelBase
{
public:
    Shards();
    virtual ~Shards();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Shards members

    /// <summary>
    /// **参数解释**：日志分片的obs下载链接集。 **取值范围**：不涉及。
    /// </summary>

    std::vector<std::string>& getObjectUrls();
    bool objectUrlsIsSet() const;
    void unsetobjectUrls();
    void setObjectUrls(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：本次请求返回的日志分片数。 **取值范围**：不涉及。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释**：本次请求命中的日志分片总数。 **取值范围**：不涉及。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<std::string> objectUrls_;
    bool objectUrlsIsSet_;
    int32_t count_;
    bool countIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Shards_H_
