
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_ExceptItem_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_ExceptItem_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/kvs/v1/model/Fail.h>
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
class HUAWEICLOUD_KVS_V1_EXPORT  ExceptItem
    : public ModelBase
{
public:
    ExceptItem();
    virtual ~ExceptItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// ExceptItem members

    /// <summary>
    /// 
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<int32_t>& getUnprocessedOpers();
    bool unprocessedOpersIsSet() const;
    void unsetunprocessedOpers();
    void setUnprocessedOpers(std::vector<int32_t> value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<Fail>& getFailedOpers();
    bool failedOpersIsSet() const;
    void unsetfailedOpers();
    void setFailedOpers(const std::vector<Fail>& value);


protected:
    std::string tableName_;
    bool tableNameIsSet_;
    std::vector<int32_t> unprocessedOpers_;
    bool unprocessedOpersIsSet_;
    std::vector<Fail> failedOpers_;
    bool failedOpersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_ExceptItem_H_
