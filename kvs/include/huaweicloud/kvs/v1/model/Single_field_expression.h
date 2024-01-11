
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Single_field_expression_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Single_field_expression_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/core/bson/Bson.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_KVS_V1_EXPORT  Single_field_expression
    : public ModelBase
{
public:
    Single_field_expression();
    virtual ~Single_field_expression();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Single_field_expression members

    /// <summary>
    /// 条件字段。
    /// </summary>

    std::string getField() const;
    bool fieldIsSet() const;
    void unsetfield();
    void setField(const std::string& value);

    /// <summary>
    /// 条件函数，取值如\&quot;$gt\&quot;, $lt\&quot;,\&quot;$gte\&quot;, $lte\&quot; \&quot;$eq\&quot;, \&quot;$ne\&quot;, \&quot;$prefix\&quot;, \&quot;$in\&quot;,\&quot;$nin\&quot;, \&quot;$exists\&quot;
    /// </summary>

    std::string getFunc() const;
    bool funcIsSet() const;
    void unsetfunc();
    void setFunc(const std::string& value);

    /// <summary>
    /// value和value_array二选一。 - value条件值，适用于除\&quot;$in\&quot;, \&quot;$nin\&quot;外的func - 字段名无意义，可以传空，也可以传字段名。 - $exists值为true/false &gt; $prefix操作只适用于string和binary类型。
    /// </summary>

    Document getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const Document& value);

    /// <summary>
    /// \&quot;value\&quot;和\&quot;value_array\&quot;二选一。 - \&quot;value_array\&quot; 条件值列表, 值用于\&quot;$in\&quot;, \&quot;$nin\&quot;
    /// </summary>

    std::vector<Document>& getValueArray();
    bool valueArrayIsSet() const;
    void unsetvalueArray();
    void setValueArray(const std::vector<Document>& value);


protected:
    std::string field_;
    bool fieldIsSet_;
    std::string func_;
    bool funcIsSet_;
    Document value_;
    bool valueIsSet_;
    std::vector<Document> valueArray_;
    bool valueArrayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Single_field_expression_H_
