
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_MultiFieldExpr_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_MultiFieldExpr_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/kvs/v1/model/SingleFieldExpr.h>

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
class HUAWEICLOUD_KVS_V1_EXPORT  MultiFieldExpr
    : public ModelBase
{
public:
    MultiFieldExpr();
    virtual ~MultiFieldExpr();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// MultiFieldExpr members

    /// <summary>
    /// 
    /// </summary>

    std::string getLogic() const;
    bool logicIsSet() const;
    void unsetlogic();
    void setLogic(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<SingleFieldExpr>& getArray();
    bool arrayIsSet() const;
    void unsetarray();
    void setArray(const std::vector<SingleFieldExpr>& value);


protected:
    std::string logic_;
    bool logicIsSet_;
    std::vector<SingleFieldExpr> array_;
    bool arrayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_MultiFieldExpr_H_
