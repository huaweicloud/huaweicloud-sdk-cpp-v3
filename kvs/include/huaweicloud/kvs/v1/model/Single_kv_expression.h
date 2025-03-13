
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Single_kv_expression_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Single_kv_expression_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_KVS_V1_EXPORT  Single_kv_expression
    : public ModelBase
{
public:
    Single_kv_expression();
    virtual ~Single_kv_expression();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Single_kv_expression members

    /// <summary>
    /// 取值：\&quot;is_doc\&quot;, \&quot;is_blob\&quot;, \&quot;is_exist\&quot;, \&quot;not_exist\&quot;。
    /// </summary>

    std::string getFunc() const;
    bool funcIsSet() const;
    void unsetfunc();
    void setFunc(const std::string& value);


protected:
    std::string func_;
    bool funcIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Single_kv_expression_H_
