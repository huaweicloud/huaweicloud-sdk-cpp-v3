
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryCustomFieldsInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryCustomFieldsInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用例自定义字段信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  QueryCustomFieldsInfo
    : public ModelBase
{
public:
    QueryCustomFieldsInfo();
    virtual ~QueryCustomFieldsInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryCustomFieldsInfo members

    /// <summary>
    /// 测试用例自定义字段Id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 测试用例自定义字段值
    /// </summary>

    std::vector<std::string>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::vector<std::string>& value);

    /// <summary>
    /// 自定义字段名，优先取id再取fieldName
    /// </summary>

    std::string getFieldName() const;
    bool fieldNameIsSet() const;
    void unsetfieldName();
    void setFieldName(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::vector<std::string> values_;
    bool valuesIsSet_;
    std::string fieldName_;
    bool fieldNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryCustomFieldsInfo_H_
