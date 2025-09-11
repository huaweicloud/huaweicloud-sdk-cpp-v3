
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListAppTemplatesResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListAppTemplatesResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/functiongraph/v2/model/ListAppTemplatesResult.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListAppTemplatesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAppTemplatesResponse();
    virtual ~ListAppTemplatesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAppTemplatesResponse members

    /// <summary>
    /// 函数应用程序模板列表
    /// </summary>

    std::vector<ListAppTemplatesResult>& getTemplates();
    bool templatesIsSet() const;
    void unsettemplates();
    void setTemplates(const std::vector<ListAppTemplatesResult>& value);

    /// <summary>
    /// 下次读取位置
    /// </summary>

    int64_t getNextMarker() const;
    bool nextMarkerIsSet() const;
    void unsetnextMarker();
    void setNextMarker(int64_t value);

    /// <summary>
    /// 应用程序模板总数
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);


protected:
    std::vector<ListAppTemplatesResult> templates_;
    bool templatesIsSet_;
    int64_t nextMarker_;
    bool nextMarkerIsSet_;
    int64_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListAppTemplatesResponse_H_
