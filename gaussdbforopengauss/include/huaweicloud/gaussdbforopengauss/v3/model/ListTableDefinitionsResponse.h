
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListTableDefinitionsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListTableDefinitionsResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/SchemaTableDefinitionResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListTableDefinitionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTableDefinitionsResponse();
    virtual ~ListTableDefinitionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTableDefinitionsResponse members

    /// <summary>
    /// **参数解释**: 数据库表定义信息列表。
    /// </summary>

    std::vector<SchemaTableDefinitionResult>& getTableDefinitions();
    bool tableDefinitionsIsSet() const;
    void unsettableDefinitions();
    void setTableDefinitions(const std::vector<SchemaTableDefinitionResult>& value);


protected:
    std::vector<SchemaTableDefinitionResult> tableDefinitions_;
    bool tableDefinitionsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListTableDefinitionsResponse_H_
