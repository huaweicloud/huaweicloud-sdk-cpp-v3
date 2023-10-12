
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogHistogramResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogHistogramResponse_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ListLogHistogramResponse
    : public ModelBase, public HttpResponse
{
public:
    ListLogHistogramResponse();
    virtual ~ListLogHistogramResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLogHistogramResponse members

    /// <summary>
    /// 直方图结果
    /// </summary>

    std::string getHistogram() const;
    bool histogramIsSet() const;
    void unsethistogram();
    void setHistogram(const std::string& value);

    /// <summary>
    /// 日志条数
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);

    /// <summary>
    /// 是否查询完成。
    /// </summary>

    bool isIsQueryComplete() const;
    bool isQueryCompleteIsSet() const;
    void unsetisQueryComplete();
    void setIsQueryComplete(bool value);


protected:
    std::string histogram_;
    bool histogramIsSet_;
    int64_t count_;
    bool countIsSet_;
    bool isQueryComplete_;
    bool isQueryCompleteIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogHistogramResponse_H_
