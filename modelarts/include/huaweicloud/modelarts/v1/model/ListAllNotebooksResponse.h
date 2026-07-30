
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAllNotebooksResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAllNotebooksResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NotebookResp.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListAllNotebooksResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAllNotebooksResponse();
    virtual ~ListAllNotebooksResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAllNotebooksResponse members

    /// <summary>
    /// **参数解释**：当前页数。 **取值范围**：正整数。
    /// </summary>

    int32_t getCurrent() const;
    bool currentIsSet() const;
    void unsetcurrent();
    void setCurrent(int32_t value);

    /// <summary>
    /// **参数解释**：Notebook实例数据。
    /// </summary>

    std::vector<NotebookResp>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<NotebookResp>& value);

    /// <summary>
    /// **参数解释**：总的页数。 **取值范围**：正整数。
    /// </summary>

    int32_t getPages() const;
    bool pagesIsSet() const;
    void unsetpages();
    void setPages(int32_t value);

    /// <summary>
    /// **参数解释**：每一页的数量。 **取值范围**：正整数。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// **参数解释**：总的记录数量。 **取值范围**：非负整数。
    /// </summary>

    int64_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int64_t value);


protected:
    int32_t current_;
    bool currentIsSet_;
    std::vector<NotebookResp> data_;
    bool dataIsSet_;
    int32_t pages_;
    bool pagesIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    int64_t total_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListAllNotebooksResponse_H_
