
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatisticInterfaceResponseBody_metrics_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatisticInterfaceResponseBody_metrics_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowStatisticInterfaceResponseBody_metrics
    : public ModelBase
{
public:
    ShowStatisticInterfaceResponseBody_metrics();
    virtual ~ShowStatisticInterfaceResponseBody_metrics();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStatisticInterfaceResponseBody_metrics members

    /// <summary>
    /// 杂凑
    /// </summary>

    double getPkiDigestBusiStatistic() const;
    bool pkiDigestBusiStatisticIsSet() const;
    void unsetpkiDigestBusiStatistic();
    void setPkiDigestBusiStatistic(double value);

    /// <summary>
    /// 解密
    /// </summary>

    double getPkiDecryptBusiStatistic() const;
    bool pkiDecryptBusiStatisticIsSet() const;
    void unsetpkiDecryptBusiStatistic();
    void setPkiDecryptBusiStatistic(double value);

    /// <summary>
    /// 生成密钥
    /// </summary>

    double getPkiGenerateKeyBusiStatistic() const;
    bool pkiGenerateKeyBusiStatisticIsSet() const;
    void unsetpkiGenerateKeyBusiStatistic();
    void setPkiGenerateKeyBusiStatistic(double value);

    /// <summary>
    /// 验章次数
    /// </summary>

    double getPkiVerifyBusiStatistic() const;
    bool pkiVerifyBusiStatisticIsSet() const;
    void unsetpkiVerifyBusiStatistic();
    void setPkiVerifyBusiStatistic(double value);

    /// <summary>
    /// 加密
    /// </summary>

    double getPkiEncryptBusiStatistic() const;
    bool pkiEncryptBusiStatisticIsSet() const;
    void unsetpkiEncryptBusiStatistic();
    void setPkiEncryptBusiStatistic(double value);

    /// <summary>
    /// 验证次数
    /// </summary>

    double getTsaVerifyBusiStatistic() const;
    bool tsaVerifyBusiStatisticIsSet() const;
    void unsettsaVerifyBusiStatistic();
    void setTsaVerifyBusiStatistic(double value);

    /// <summary>
    /// 解析次数
    /// </summary>

    double getTsaParseBusiStatistic() const;
    bool tsaParseBusiStatisticIsSet() const;
    void unsettsaParseBusiStatistic();
    void setTsaParseBusiStatistic(double value);

    /// <summary>
    /// svs验签
    /// </summary>

    double getSvsVerifyBusiStatistic() const;
    bool svsVerifyBusiStatisticIsSet() const;
    void unsetsvsVerifyBusiStatistic();
    void setSvsVerifyBusiStatistic(double value);

    /// <summary>
    /// 生成随机
    /// </summary>

    double getPkiRandomBusiStatistic() const;
    bool pkiRandomBusiStatisticIsSet() const;
    void unsetpkiRandomBusiStatistic();
    void setPkiRandomBusiStatistic(double value);

    /// <summary>
    /// 统计时间，UNIX时间戳，单位毫秒
    /// </summary>

    int64_t getTimestamp() const;
    bool timestampIsSet() const;
    void unsettimestamp();
    void setTimestamp(int64_t value);

    /// <summary>
    /// svs获取证书等相关证书操作
    /// </summary>

    double getSvsCertBusiStatistic() const;
    bool svsCertBusiStatisticIsSet() const;
    void unsetsvsCertBusiStatistic();
    void setSvsCertBusiStatistic(double value);

    /// <summary>
    /// svs编码
    /// </summary>

    double getSvsEncodeBusiStatistic() const;
    bool svsEncodeBusiStatisticIsSet() const;
    void unsetsvsEncodeBusiStatistic();
    void setSvsEncodeBusiStatistic(double value);

    /// <summary>
    /// 申请次数
    /// </summary>

    double getTsaApplyBusiStatistic() const;
    bool tsaApplyBusiStatisticIsSet() const;
    void unsettsaApplyBusiStatistic();
    void setTsaApplyBusiStatistic(double value);

    /// <summary>
    /// svs签名
    /// </summary>

    double getSvsSignBusiStatistic() const;
    bool svsSignBusiStatisticIsSet() const;
    void unsetsvsSignBusiStatistic();
    void setSvsSignBusiStatistic(double value);

    /// <summary>
    /// svs解密
    /// </summary>

    double getSvsDecryptBusiStatistic() const;
    bool svsDecryptBusiStatisticIsSet() const;
    void unsetsvsDecryptBusiStatistic();
    void setSvsDecryptBusiStatistic(double value);

    /// <summary>
    /// 调用次数
    /// </summary>

    double getKmsBusiStatistic() const;
    bool kmsBusiStatisticIsSet() const;
    void unsetkmsBusiStatistic();
    void setKmsBusiStatistic(double value);

    /// <summary>
    /// 验章次数
    /// </summary>

    double getSealVerifyBusiStatistic() const;
    bool sealVerifyBusiStatisticIsSet() const;
    void unsetsealVerifyBusiStatistic();
    void setSealVerifyBusiStatistic(double value);

    /// <summary>
    /// 签名
    /// </summary>

    double getPkiSignBusiStatistic() const;
    bool pkiSignBusiStatisticIsSet() const;
    void unsetpkiSignBusiStatistic();
    void setPkiSignBusiStatistic(double value);

    /// <summary>
    /// 口令验证
    /// </summary>

    double getSecauthBusiStatistic() const;
    bool secauthBusiStatisticIsSet() const;
    void unsetsecauthBusiStatistic();
    void setSecauthBusiStatistic(double value);

    /// <summary>
    /// 签章次数
    /// </summary>

    double getSealSignBusiStatistic() const;
    bool sealSignBusiStatisticIsSet() const;
    void unsetsealSignBusiStatistic();
    void setSealSignBusiStatistic(double value);

    /// <summary>
    /// 签名次数
    /// </summary>

    double getSplitBusiStatistic() const;
    bool splitBusiStatisticIsSet() const;
    void unsetsplitBusiStatistic();
    void setSplitBusiStatistic(double value);

    /// <summary>
    /// svs生成随机
    /// </summary>

    double getSvsRandomBusiStatistic() const;
    bool svsRandomBusiStatisticIsSet() const;
    void unsetsvsRandomBusiStatistic();
    void setSvsRandomBusiStatistic(double value);

    /// <summary>
    /// svs加密
    /// </summary>

    double getSvsEncryptBusiStatistic() const;
    bool svsEncryptBusiStatisticIsSet() const;
    void unsetsvsEncryptBusiStatistic();
    void setSvsEncryptBusiStatistic(double value);

    /// <summary>
    /// 解密次数
    /// </summary>

    double getSmsDecBusiStatistic() const;
    bool smsDecBusiStatisticIsSet() const;
    void unsetsmsDecBusiStatistic();
    void setSmsDecBusiStatistic(double value);

    /// <summary>
    /// svs杂凑
    /// </summary>

    double getSvsDigestBusiStatistic() const;
    bool svsDigestBusiStatisticIsSet() const;
    void unsetsvsDigestBusiStatistic();
    void setSvsDigestBusiStatistic(double value);

    /// <summary>
    /// svs解码
    /// </summary>

    double getSvsDecodeBusiStatistic() const;
    bool svsDecodeBusiStatisticIsSet() const;
    void unsetsvsDecodeBusiStatistic();
    void setSvsDecodeBusiStatistic(double value);


protected:
    double pkiDigestBusiStatistic_;
    bool pkiDigestBusiStatisticIsSet_;
    double pkiDecryptBusiStatistic_;
    bool pkiDecryptBusiStatisticIsSet_;
    double pkiGenerateKeyBusiStatistic_;
    bool pkiGenerateKeyBusiStatisticIsSet_;
    double pkiVerifyBusiStatistic_;
    bool pkiVerifyBusiStatisticIsSet_;
    double pkiEncryptBusiStatistic_;
    bool pkiEncryptBusiStatisticIsSet_;
    double tsaVerifyBusiStatistic_;
    bool tsaVerifyBusiStatisticIsSet_;
    double tsaParseBusiStatistic_;
    bool tsaParseBusiStatisticIsSet_;
    double svsVerifyBusiStatistic_;
    bool svsVerifyBusiStatisticIsSet_;
    double pkiRandomBusiStatistic_;
    bool pkiRandomBusiStatisticIsSet_;
    int64_t timestamp_;
    bool timestampIsSet_;
    double svsCertBusiStatistic_;
    bool svsCertBusiStatisticIsSet_;
    double svsEncodeBusiStatistic_;
    bool svsEncodeBusiStatisticIsSet_;
    double tsaApplyBusiStatistic_;
    bool tsaApplyBusiStatisticIsSet_;
    double svsSignBusiStatistic_;
    bool svsSignBusiStatisticIsSet_;
    double svsDecryptBusiStatistic_;
    bool svsDecryptBusiStatisticIsSet_;
    double kmsBusiStatistic_;
    bool kmsBusiStatisticIsSet_;
    double sealVerifyBusiStatistic_;
    bool sealVerifyBusiStatisticIsSet_;
    double pkiSignBusiStatistic_;
    bool pkiSignBusiStatisticIsSet_;
    double secauthBusiStatistic_;
    bool secauthBusiStatisticIsSet_;
    double sealSignBusiStatistic_;
    bool sealSignBusiStatisticIsSet_;
    double splitBusiStatistic_;
    bool splitBusiStatisticIsSet_;
    double svsRandomBusiStatistic_;
    bool svsRandomBusiStatisticIsSet_;
    double svsEncryptBusiStatistic_;
    bool svsEncryptBusiStatisticIsSet_;
    double smsDecBusiStatistic_;
    bool smsDecBusiStatisticIsSet_;
    double svsDigestBusiStatistic_;
    bool svsDigestBusiStatisticIsSet_;
    double svsDecodeBusiStatistic_;
    bool svsDecodeBusiStatisticIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatisticInterfaceResponseBody_metrics_H_
