
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_GetTemplatesRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_GetTemplatesRequest_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  GetTemplatesRequest
    : public ModelBase
{
public:
    GetTemplatesRequest();
    virtual ~GetTemplatesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetTemplatesRequest members

    /// <summary>
    /// 模板平台类型
    /// </summary>

    std::string getPlatform() const;
    bool platformIsSet() const;
    void unsetplatform();
    void setPlatform(const std::string& value);

    /// <summary>
    /// 语言类型
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 是否支持流水线
    /// </summary>

    std::string getPipeline() const;
    bool pipelineIsSet() const;
    void unsetpipeline();
    void setPipeline(const std::string& value);

    /// <summary>
    /// 模板分类
    /// </summary>

    std::string getEntertype() const;
    bool entertypeIsSet() const;
    void unsetentertype();
    void setEntertype(const std::string& value);

    /// <summary>
    /// 模板名称
    /// </summary>

    std::string getSearch() const;
    bool searchIsSet() const;
    void unsetsearch();
    void setSearch(const std::string& value);

    /// <summary>
    /// 模板日期排序
    /// </summary>

    std::string getDateorder() const;
    bool dateorderIsSet() const;
    void unsetdateorder();
    void setDateorder(const std::string& value);

    /// <summary>
    /// 模板引用次数排序
    /// </summary>

    std::string getUsedtimeorder() const;
    bool usedtimeorderIsSet() const;
    void unsetusedtimeorder();
    void setUsedtimeorder(const std::string& value);

    /// <summary>
    /// 模板公开类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 大区名称
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 分页页数
    /// </summary>

    int32_t getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(int32_t value);

    /// <summary>
    /// 每页数据数
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);


protected:
    std::string platform_;
    bool platformIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::string pipeline_;
    bool pipelineIsSet_;
    std::string entertype_;
    bool entertypeIsSet_;
    std::string search_;
    bool searchIsSet_;
    std::string dateorder_;
    bool dateorderIsSet_;
    std::string usedtimeorder_;
    bool usedtimeorderIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string region_;
    bool regionIsSet_;
    int32_t pageNo_;
    bool pageNoIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    GetTemplatesRequest& dereference_from_shared_ptr(std::shared_ptr<GetTemplatesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_GetTemplatesRequest_H_
