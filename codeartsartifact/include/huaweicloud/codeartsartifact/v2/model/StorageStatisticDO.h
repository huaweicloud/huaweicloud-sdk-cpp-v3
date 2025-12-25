
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_StorageStatisticDO_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_StorageStatisticDO_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  StorageStatisticDO
    : public ModelBase
{
public:
    StorageStatisticDO();
    virtual ~StorageStatisticDO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StorageStatisticDO members

    /// <summary>
    /// 参数解释: 文件总数。 取值范围: 不涉及。
    /// </summary>

    int64_t getFilesCount() const;
    bool filesCountIsSet() const;
    void unsetfilesCount();
    void setFilesCount(int64_t value);

    /// <summary>
    /// 参数解释: 占用空间(字节)。 取值范围: 不涉及。
    /// </summary>

    int64_t getUsedSpaceLength() const;
    bool usedSpaceLengthIsSet() const;
    void unsetusedSpaceLength();
    void setUsedSpaceLength(int64_t value);

    /// <summary>
    /// 参数解释: 占用空间。 取值范围: 不涉及。
    /// </summary>

    std::string getUsedSpace() const;
    bool usedSpaceIsSet() const;
    void unsetusedSpace();
    void setUsedSpace(const std::string& value);

    /// <summary>
    /// 参数解释: 统计日期。 取值范围: 不涉及。
    /// </summary>

    std::string getSummaryDate() const;
    bool summaryDateIsSet() const;
    void unsetsummaryDate();
    void setSummaryDate(const std::string& value);

    /// <summary>
    /// 参数解释: 文件夹总数。 取值范围: 不涉及。
    /// </summary>

    int64_t getFoldersCount() const;
    bool foldersCountIsSet() const;
    void unsetfoldersCount();
    void setFoldersCount(int64_t value);

    /// <summary>
    /// 参数解释: 文件及文件夹总数。 取值范围: 不涉及。
    /// </summary>

    int64_t getItemsCount() const;
    bool itemsCountIsSet() const;
    void unsetitemsCount();
    void setItemsCount(int64_t value);


protected:
    int64_t filesCount_;
    bool filesCountIsSet_;
    int64_t usedSpaceLength_;
    bool usedSpaceLengthIsSet_;
    std::string usedSpace_;
    bool usedSpaceIsSet_;
    std::string summaryDate_;
    bool summaryDateIsSet_;
    int64_t foldersCount_;
    bool foldersCountIsSet_;
    int64_t itemsCount_;
    bool itemsCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_StorageStatisticDO_H_
