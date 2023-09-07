
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowSupportObjectTypeResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowSupportObjectTypeResponse_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowSupportObjectTypeResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSupportObjectTypeResponse();
    virtual ~ShowSupportObjectTypeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowSupportObjectTypeResponse members

    /// <summary>
    /// 全量任务是否支持对象选择。
    /// </summary>

    bool isIsFullTransSupportObject() const;
    bool isFullTransSupportObjectIsSet() const;
    void unsetisFullTransSupportObject();
    void setIsFullTransSupportObject(bool value);

    /// <summary>
    /// 增量任务是否支持对象选择。
    /// </summary>

    bool isIsIncreTransSupportObject() const;
    bool isIncreTransSupportObjectIsSet() const;
    void unsetisIncreTransSupportObject();
    void setIsIncreTransSupportObject(bool value);

    /// <summary>
    /// 全量加增量任务是否支持对象选择。
    /// </summary>

    bool isIsFullIncreTransSupportObject() const;
    bool isFullIncreTransSupportObjectIsSet() const;
    void unsetisFullIncreTransSupportObject();
    void setIsFullIncreTransSupportObject(bool value);

    /// <summary>
    /// 支持对象导入的引引擎。
    /// </summary>

    std::vector<std::string>& getSupportObjectImportEngine();
    bool supportObjectImportEngineIsSet() const;
    void unsetsupportObjectImportEngine();
    void setSupportObjectImportEngine(const std::vector<std::string>& value);

    /// <summary>
    /// 是否支持列映射。
    /// </summary>

    bool isIsSupportColumnMapping() const;
    bool isSupportColumnMappingIsSet() const;
    void unsetisSupportColumnMapping();
    void setIsSupportColumnMapping(bool value);

    /// <summary>
    /// 库是否支持搜索。
    /// </summary>

    bool isIsDatabaseSupportSearch() const;
    bool isDatabaseSupportSearchIsSet() const;
    void unsetisDatabaseSupportSearch();
    void setIsDatabaseSupportSearch(bool value);

    /// <summary>
    /// schema是否支持搜索。
    /// </summary>

    bool isIsSchemaSupportSearch() const;
    bool isSchemaSupportSearchIsSet() const;
    void unsetisSchemaSupportSearch();
    void setIsSchemaSupportSearch(bool value);

    /// <summary>
    /// 表是否支持搜索。
    /// </summary>

    bool isIsTableSupportSearch() const;
    bool isTableSupportSearchIsSet() const;
    void unsetisTableSupportSearch();
    void setIsTableSupportSearch(bool value);

    /// <summary>
    /// 对象导入支持的文件大小。
    /// </summary>

    std::string getFileSize() const;
    bool fileSizeIsSet() const;
    void unsetfileSize();
    void setFileSize(const std::string& value);

    /// <summary>
    /// 上一次选择迁移对象或者同步对象的方式。 - srcImportObject：当前任务上次选择的方式为导入方式
    /// </summary>

    std::string getPreviousSelect() const;
    bool previousSelectIsSet() const;
    void unsetpreviousSelect();
    void setPreviousSelect(const std::string& value);

    /// <summary>
    /// 对象导入类型。 - table：表级 - database：库级
    /// </summary>

    std::string getImportLevel() const;
    bool importLevelIsSet() const;
    void unsetimportLevel();
    void setImportLevel(const std::string& value);


protected:
    bool isFullTransSupportObject_;
    bool isFullTransSupportObjectIsSet_;
    bool isIncreTransSupportObject_;
    bool isIncreTransSupportObjectIsSet_;
    bool isFullIncreTransSupportObject_;
    bool isFullIncreTransSupportObjectIsSet_;
    std::vector<std::string> supportObjectImportEngine_;
    bool supportObjectImportEngineIsSet_;
    bool isSupportColumnMapping_;
    bool isSupportColumnMappingIsSet_;
    bool isDatabaseSupportSearch_;
    bool isDatabaseSupportSearchIsSet_;
    bool isSchemaSupportSearch_;
    bool isSchemaSupportSearchIsSet_;
    bool isTableSupportSearch_;
    bool isTableSupportSearchIsSet_;
    std::string fileSize_;
    bool fileSizeIsSet_;
    std::string previousSelect_;
    bool previousSelectIsSet_;
    std::string importLevel_;
    bool importLevelIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowSupportObjectTypeResponse_H_
