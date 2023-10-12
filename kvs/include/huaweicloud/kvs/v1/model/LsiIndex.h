
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_LsiIndex_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_LsiIndex_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/kvs/v1/model/Field.h>

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
class HUAWEICLOUD_KVS_V1_EXPORT  LsiIndex
    : public ModelBase
{
public:
    LsiIndex();
    virtual ~LsiIndex();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// LsiIndex members

    /// <summary>
    /// 
    /// </summary>

    std::string getIndexName() const;
    bool indexNameIsSet() const;
    void unsetindexName();
    void setIndexName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<Field>& getSortKeyFields();
    bool sortKeyFieldsIsSet() const;
    void unsetsortKeyFields();
    void setSortKeyFields(const std::vector<Field>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getAbstractFields();
    bool abstractFieldsIsSet() const;
    void unsetabstractFields();
    void setAbstractFields(const std::vector<std::string>& value);


protected:
    std::string indexName_;
    bool indexNameIsSet_;
    std::vector<Field> sortKeyFields_;
    bool sortKeyFieldsIsSet_;
    std::vector<std::string> abstractFields_;
    bool abstractFieldsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_LsiIndex_H_
