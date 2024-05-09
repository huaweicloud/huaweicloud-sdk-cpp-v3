
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ListContentCompareDetailRequest_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ListContentCompareDetailRequest_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ListContentCompareDetailRequest
    : public ModelBase
{
public:
    ListContentCompareDetailRequest();
    virtual ~ListContentCompareDetailRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListContentCompareDetailRequest members

    /// <summary>
    /// 请求语言类型。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 对比任务ID。
    /// </summary>

    std::string getCompareJobId() const;
    bool compareJobIdIsSet() const;
    void unsetcompareJobId();
    void setCompareJobId(const std::string& value);

    /// <summary>
    /// 目标库名称。
    /// </summary>

    std::string getTargetDbName() const;
    bool targetDbNameIsSet() const;
    void unsettargetDbName();
    void setTargetDbName(const std::string& value);

    /// <summary>
    /// 源库名称。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 类型。 compare：对比 unCompare：无法对比
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 每页显示的条目数量，最大值1000。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 偏移量，表示从此偏移量开始查询， offset大于等于0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string compareJobId_;
    bool compareJobIdIsSet_;
    std::string targetDbName_;
    bool targetDbNameIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    std::string type_;
    bool typeIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListContentCompareDetailRequest& dereference_from_shared_ptr(std::shared_ptr<ListContentCompareDetailRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ListContentCompareDetailRequest_H_
