
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_SingleFieldExpr_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_SingleFieldExpr_H_

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
class HUAWEICLOUD_KVS_V1_EXPORT  SingleFieldExpr
    : public ModelBase
{
public:
    SingleFieldExpr();
    virtual ~SingleFieldExpr();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// SingleFieldExpr members

    /// <summary>
    /// 
    /// </summary>

    std::string getField() const;
    bool fieldIsSet() const;
    void unsetfield();
    void setField(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getFunc() const;
    bool funcIsSet() const;
    void unsetfunc();
    void setFunc(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Document getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const Document& value);

    /// <summary>
    /// 
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

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_SingleFieldExpr_H_
