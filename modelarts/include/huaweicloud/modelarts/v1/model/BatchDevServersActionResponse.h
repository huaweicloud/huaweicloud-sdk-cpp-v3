
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDevServersActionResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDevServersActionResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ServerResponse.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchDevServersActionResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchDevServersActionResponse();
    virtual ~BatchDevServersActionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDevServersActionResponse members

    /// <summary>
    /// **参数解释**：当前页数。 **取值范围**：1 - 2097152
    /// </summary>

    int32_t getCurrent() const;
    bool currentIsSet() const;
    void unsetcurrent();
    void setCurrent(int32_t value);

    /// <summary>
    /// **参数解释**：Lite Server实例列表。
    /// </summary>

    std::vector<ServerResponse>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<ServerResponse>& value);

    /// <summary>
    /// **参数解释**：总的页数。 **取值范围**：1 - 2097152
    /// </summary>

    int32_t getPages() const;
    bool pagesIsSet() const;
    void unsetpages();
    void setPages(int32_t value);

    /// <summary>
    /// **参数解释**：每一页的数量。设置查询时每页返回的最大实例数量，此值将直接影响到返回数据的量。调整此值可以优化查询性能或提高单次请求的信息量。 **取值范围**：1 - 1024
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// **参数解释**：总的记录数量。表示当前查询条件下，满足条件的实例总数。此字段用于用户了解数据的整体规模。 **取值范围**：1 - 2147483647
    /// </summary>

    int64_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    int32_t current_;
    bool currentIsSet_;
    std::vector<ServerResponse> data_;
    bool dataIsSet_;
    int32_t pages_;
    bool pagesIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    int64_t total_;
    bool totalIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDevServersActionResponse_H_
