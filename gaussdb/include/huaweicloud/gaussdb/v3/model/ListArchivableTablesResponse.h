
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListArchivableTablesResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListArchivableTablesResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ArchivableTable.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListArchivableTablesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListArchivableTablesResponse();
    virtual ~ListArchivableTablesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListArchivableTablesResponse members

    /// <summary>
    /// **参数解释**：  总记录数。  **取值范围**：  大于等于0。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// **参数解释**：  可归档表信息。
    /// </summary>

    std::vector<ArchivableTable>& getArchivableTables();
    bool archivableTablesIsSet() const;
    void unsetarchivableTables();
    void setArchivableTables(const std::vector<ArchivableTable>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<ArchivableTable> archivableTables_;
    bool archivableTablesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListArchivableTablesResponse_H_
