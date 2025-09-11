
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionTemplateResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionTemplateResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/ShowFunctionTemplateResponseBody.h>
#include <vector>

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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListFunctionTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    ListFunctionTemplateResponse();
    virtual ~ListFunctionTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFunctionTemplateResponse members

    /// <summary>
    /// 函数模板列表
    /// </summary>

    std::vector<ShowFunctionTemplateResponseBody>& getFuncTemplates();
    bool funcTemplatesIsSet() const;
    void unsetfuncTemplates();
    void setFuncTemplates(const std::vector<ShowFunctionTemplateResponseBody>& value);

    /// <summary>
    /// 函数下次记录读取位置。
    /// </summary>

    int32_t getNextMarker() const;
    bool nextMarkerIsSet() const;
    void unsetnextMarker();
    void setNextMarker(int32_t value);


protected:
    std::vector<ShowFunctionTemplateResponseBody> funcTemplates_;
    bool funcTemplatesIsSet_;
    int32_t nextMarker_;
    bool nextMarkerIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionTemplateResponse_H_
