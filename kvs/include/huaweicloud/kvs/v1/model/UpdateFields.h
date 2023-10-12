
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_UpdateFields_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_UpdateFields_H_

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
class HUAWEICLOUD_KVS_V1_EXPORT  UpdateFields
    : public ModelBase
{
public:
    UpdateFields();
    virtual ~UpdateFields();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// UpdateFields members

    /// <summary>
    /// 
    /// </summary>

    Document getSet() const;
    bool setIsSet() const;
    void unsetset();
    void setSet(const Document& value);

    /// <summary>
    /// 
    /// </summary>

    Document getAdd() const;
    bool addIsSet() const;
    void unsetadd();
    void setAdd(const Document& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getRmv();
    bool rmvIsSet() const;
    void unsetrmv();
    void setRmv(const std::vector<std::string>& value);


protected:
    Document set_;
    bool setIsSet_;
    Document add_;
    bool addIsSet_;
    std::vector<std::string> rmv_;
    bool rmvIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_UpdateFields_H_
