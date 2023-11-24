
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_ScanSkeyKvResponse_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_ScanSkeyKvResponse_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/bson/Bson.h>
#include <huaweicloud/kvs/v1/model/KvItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_KVS_V1_EXPORT  ScanSkeyKvResponse
    : public ModelBase, public HttpResponse
{
public:
    ScanSkeyKvResponse();
    virtual ~ScanSkeyKvResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// ScanSkeyKvResponse members

    /// <summary>
    /// 
    /// </summary>

    int32_t getReturnedCount() const;
    bool returnedCountIsSet() const;
    void unsetreturnedCount();
    void setReturnedCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getFilteredCount() const;
    bool filteredCountIsSet() const;
    void unsetfilteredCount();
    void setFilteredCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    Document getCursorSortKey() const;
    bool cursorSortKeyIsSet() const;
    void unsetcursorSortKey();
    void setCursorSortKey(const Document& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<KvItem>& getKvArray();
    bool kvArrayIsSet() const;
    void unsetkvArray();
    void setKvArray(const std::vector<KvItem>& value);


protected:
    int32_t returnedCount_;
    bool returnedCountIsSet_;
    int32_t filteredCount_;
    bool filteredCountIsSet_;
    Document cursorSortKey_;
    bool cursorSortKeyIsSet_;
    std::vector<KvItem> kvArray_;
    bool kvArrayIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_ScanSkeyKvResponse_H_