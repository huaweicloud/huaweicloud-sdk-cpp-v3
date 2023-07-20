
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_FlowCompareData_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_FlowCompareData_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 对比结果。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  FlowCompareData
    : public ModelBase
{
public:
    FlowCompareData();
    virtual ~FlowCompareData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// FlowCompareData members

    /// <summary>
    /// 源数据库名称。
    /// </summary>

    std::string getSrcDb() const;
    bool srcDbIsSet() const;
    void unsetsrcDb();
    void setSrcDb(const std::string& value);

    /// <summary>
    /// 源对象名称。
    /// </summary>

    std::string getSrcTb() const;
    bool srcTbIsSet() const;
    void unsetsrcTb();
    void setSrcTb(const std::string& value);

    /// <summary>
    /// 目标数据库名称。
    /// </summary>

    std::string getDstDb() const;
    bool dstDbIsSet() const;
    void unsetdstDb();
    void setDstDb(const std::string& value);

    /// <summary>
    /// 目标对象名称。
    /// </summary>

    std::string getDstTb() const;
    bool dstTbIsSet() const;
    void unsetdstTb();
    void setDstTb(const std::string& value);

    /// <summary>
    /// 进度，1-100。
    /// </summary>

    int32_t getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(int32_t value);


protected:
    std::string srcDb_;
    bool srcDbIsSet_;
    std::string srcTb_;
    bool srcTbIsSet_;
    std::string dstDb_;
    bool dstDbIsSet_;
    std::string dstTb_;
    bool dstTbIsSet_;
    int32_t progress_;
    bool progressIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_FlowCompareData_H_
